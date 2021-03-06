/*

 IGO Software SL  -  info@igosoftware.es

 http://www.glob3.org

-------------------------------------------------------------------------------
 Copyright (c) 2010, IGO Software SL
 All rights reserved.

 Redistribution and use in source and binary forms, with or without
 modification, are permitted provided that the following conditions are met:
     * Redistributions of source code must retain the above copyright
       notice, this list of conditions and the following disclaimer.
     * Redistributions in binary form must reproduce the above copyright
       notice, this list of conditions and the following disclaimer in the
       documentation and/or other materials provided with the distribution.
     * Neither the name of the IGO Software SL nor the
       names of its contributors may be used to endorse or promote products
       derived from this software without specific prior written permission.

 THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
 ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 DISCLAIMED. IN NO EVENT SHALL IGO Software SL BE LIABLE FOR ANY
 DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
 ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
 SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
-------------------------------------------------------------------------------

*/


package es.igosoftware.experimental.vectorial;

import org.geotools.data.DataStore;
import org.geotools.data.simple.SimpleFeatureCollection;
import org.geotools.data.simple.SimpleFeatureSource;

import es.igosoftware.euclid.IBoundedGeometry2D;
import es.igosoftware.euclid.bounding.IFinite2DBounds;
import es.igosoftware.euclid.features.IGlobeFeatureCollection;
import es.igosoftware.euclid.projection.GProjection;
import es.igosoftware.euclid.vector.IVector2;


public class GPostgisLoader {

   //private static final GProjection PROJECTION = GProjection.EPSG_4326;


   //   private static List<IVector2> convert(final com.vividsolutions.jts.geom.Coordinate[] coordinates,
   //                                         final GProjection projection) {
   //      final List<IVector2> result = new ArrayList<IVector2>(coordinates.length);
   //
   //      for (final com.vividsolutions.jts.geom.Coordinate coordinate : coordinates) {
   //         if (projection.isLatLong()) {
   //            result.add(new GVector2D(Math.toRadians(coordinate.x), Math.toRadians(coordinate.y)));
   //         }
   //         else {
   //            result.add(new GVector2D(coordinate.x, coordinate.y).reproject(projection, GProjection.EPSG_4326));
   //         }
   //      }
   //
   //      return result;
   //   }
   //
   //
   //   private static List<IVector2> removeLastIfRepeated(final List<IVector2> points) {
   //      if (points.size() < 2) {
   //         return points;
   //      }
   //
   //      final IVector2 first = points.get(0);
   //      final int lastIndex = points.size() - 1;
   //      final IVector2 last = points.get(lastIndex);
   //      if (first.closeTo(last)) {
   //         return points.subList(0, lastIndex - 1);
   //      }
   //
   //      return points;
   //   }
   //
   //
   //   private static List<IVector2> removeConsecutiveEqualsPoints(final List<IVector2> points) {
   //      final int pointsCount = points.size();
   //      final ArrayList<IVector2> result = new ArrayList<IVector2>(pointsCount);
   //
   //      for (int i = 0; i < pointsCount; i++) {
   //         final IVector2 current = points.get(i);
   //         final IVector2 next = points.get((i + 1) % pointsCount);
   //         if (!current.closeTo(next)) {
   //            result.add(current);
   //         }
   //      }
   //
   //      result.trimToSize();
   //      return result;
   //   }


   public static IGlobeFeatureCollection<IVector2, ? extends IBoundedGeometry2D<? extends IFinite2DBounds<?>>> readFeatures(final DataStore dataStore,
                                                                                                                            final String layerName,
                                                                                                                            final GProjection projection)
                                                                                                                                                         throws Exception {


      final SimpleFeatureSource featureSource = dataStore.getFeatureSource(layerName);

      final SimpleFeatureCollection featuresCollection = featureSource.getFeatures();

      final IGlobeFeatureCollection<IVector2, ? extends IBoundedGeometry2D<? extends IFinite2DBounds<?>>> globeFeaturesCollection = GFeaturesTools.processFeatureCollection(
               layerName, projection, featuresCollection);

      dataStore.dispose();

      return globeFeaturesCollection;

      //return GFeaturesTools.processFeatureCollection(layerName, projection, dataStore, featuresCollection);

      //      final GIntHolder validCounter = new GIntHolder(0);
      //      //final GIntHolder polygonsWithHolesCounter = new GIntHolder(0);
      //      final GIntHolder invalidCounter = new GIntHolder(0);
      //      //      final GIntHolder validVerticesCounter = new GIntHolder(0);
      //      final GIntHolder polygonsCounter = new GIntHolder(0);
      //      final GIntHolder linesCounter = new GIntHolder(0);
      //      final GIntHolder pointsCounter = new GIntHolder(0);
      //
      //
      //      final int featuresCount = featuresCollection.size();
      //      final ArrayList<IGlobeFeature<IVector2, IBoundedGeometry2D<? extends IFinite2DBounds<?>>>> euclidFeatures = new ArrayList<IGlobeFeature<IVector2, IBoundedGeometry2D<? extends IFinite2DBounds<?>>>>(
      //               featuresCount);
      //
      //      final GProgress progress = new GProgress(featuresCount) {
      //         @Override
      //         public void informProgress(final double percent,
      //                                    final long elapsed,
      //                                    final long estimatedMsToFinish) {
      //            //            System.out.println("Loading \"" + fileName.buildPath() + "\" "
      //            //                               + progressString(percent, elapsed, estimatedMsToFinish));
      //            System.out.println("Loading data from data storage: " + layerName + " "
      //                               + progressString(percent, elapsed, estimatedMsToFinish));
      //         }
      //      };
      //
      //      final FeatureIterator<SimpleFeature> iterator = featuresCollection.features();
      //
      //
      //      while (iterator.hasNext()) {
      //         final SimpleFeature feature = iterator.next();
      //
      //         final GeometryAttribute geometryAttribute = feature.getDefaultGeometryProperty();
      //
      //         final GeometryType type = geometryAttribute.getType();
      //
      //         if (type.getBinding() == com.vividsolutions.jts.geom.MultiPolygon.class) {
      //
      //            polygonsCounter.increment();
      //
      //            final com.vividsolutions.jts.geom.MultiPolygon multipolygon = (com.vividsolutions.jts.geom.MultiPolygon) geometryAttribute.getValue();
      //            final int geometriesCount = multipolygon.getNumGeometries();
      //
      //            final List<IPolygon2D> polygons = new ArrayList<IPolygon2D>(geometriesCount);
      //            for (int i = 0; i < geometriesCount; i++) {
      //               final com.vividsolutions.jts.geom.Polygon jtsPolygon = (com.vividsolutions.jts.geom.Polygon) multipolygon.getGeometryN(i);
      //
      //               try {
      //                  final IPolygon2D euclidPolygon = createEuclidPolygon(projection, jtsPolygon);
      //
      //                  if (euclidPolygon != null) {
      //                     //                     euclidFeatures.add(createFeature(euclidPolygon, feature));
      //                     polygons.add(euclidPolygon);
      //                     validCounter.increment();
      //                  }
      //               }
      //               catch (final IllegalArgumentException e) {
      //                  //                     System.err.println(e.getMessage());
      //               }
      //            }
      //
      //            if (!polygons.isEmpty()) {
      //               if (polygons.size() == 1) {
      //                  euclidFeatures.add(createFeature(polygons.get(0), feature));
      //               }
      //               else {
      //                  euclidFeatures.add(createFeature(new GMultiGeometry2D<IPolygon2D>(polygons), feature));
      //               }
      //            }
      //
      //         }
      //         else if (type.getBinding() == com.vividsolutions.jts.geom.MultiLineString.class) {
      //
      //            linesCounter.increment();
      //
      //            final com.vividsolutions.jts.geom.MultiLineString multiline = (com.vividsolutions.jts.geom.MultiLineString) geometryAttribute.getValue();
      //            final int geometriesCount = multiline.getNumGeometries();
      //
      //            final List<IPolygonalChain2D> lines = new ArrayList<IPolygonalChain2D>(geometriesCount);
      //            for (int i = 0; i < geometriesCount; i++) {
      //               final com.vividsolutions.jts.geom.LineString jtsLine = (com.vividsolutions.jts.geom.LineString) multiline.getGeometryN(i);
      //
      //               try {
      //                  final IPolygonalChain2D euclidLine = createLine(jtsLine.getCoordinates(), projection);
      //
      //                  //euclidFeatures.add(createFeature(euclidLines, feature));
      //                  lines.add(euclidLine);
      //               }
      //               catch (final IllegalArgumentException e) {
      //                  //                     System.err.println(e.getMessage());
      //               }
      //            }
      //
      //            if (!lines.isEmpty()) {
      //               if (lines.size() == 1) {
      //                  euclidFeatures.add(createFeature(lines.get(0), feature));
      //               }
      //               else {
      //                  euclidFeatures.add(createFeature(new GMultiGeometry2D<IPolygonalChain2D>(lines), feature));
      //               }
      //            }
      //
      //            validCounter.increment();
      //         }
      //         else if (type.getBinding() == com.vividsolutions.jts.geom.Point.class) {
      //
      //            pointsCounter.increment();
      //
      //            final IVector2 euclidPoint = createPoint(
      //                     ((com.vividsolutions.jts.geom.Point) geometryAttribute.getValue()).getCoordinate(), projection);
      //            euclidFeatures.add(createFeature(euclidPoint, feature));
      //
      //            validCounter.increment();
      //         }
      //         else if (type.getBinding() == com.vividsolutions.jts.geom.MultiPoint.class) {
      //            final IBoundedGeometry2D<? extends IFinite2DBounds<?>> euclidMultipoint = createEuclidMultiPoint(geometryAttribute,
      //                     projection);
      //            euclidFeatures.add(createFeature(euclidMultipoint, feature));
      //
      //            validCounter.increment();
      //         }
      //         else {
      //            invalidCounter.increment();
      //            System.out.println("invalid type: " + type);
      //         }
      //
      //
      //         progress.stepDone();
      //      }
      //
      //
      //      dataStore.dispose();
      //
      //      euclidFeatures.trimToSize();
      //
      //      System.out.println();
      //      System.out.println("Features: " + featuresCount);
      //
      //      System.out.println();
      //      System.out.println("Read " + validCounter.get() + " valid geometries");
      //
      //      System.out.println("  => " + polygonsCounter.get() + " valid polygons");
      //      System.out.println("  => " + linesCounter.get() + " valid lines");
      //      System.out.println("  => " + pointsCounter.get() + " valid points");
      //      System.out.println();
      //
      //      if (invalidCounter.get() > 0) {
      //         System.out.println("Ignored " + invalidCounter.get() + " invalid geometries");
      //      }
      //
      //      System.out.println();
      //
      //      final SimpleFeatureType schema = featureSource.getSchema();
      //      final int fieldsCount = schema.getAttributeCount();
      //      final List<GField> fields = new ArrayList<GField>(fieldsCount);
      //      System.out.println("Fields count: " + fieldsCount);
      //      for (int i = 0; i < fieldsCount; i++) {
      //         final String fieldName = schema.getType(i).getName().getLocalPart();
      //         System.out.println("Fieldname: " + fieldName);
      //         final Class<?> fieldType = schema.getType(i).getBinding();
      //
      //         fields.add(new GField(fieldName, fieldType));
      //      }
      //
      //
      //      return new GListFeatureCollection<IVector2, IBoundedGeometry2D<? extends IFinite2DBounds<?>>>(GProjection.EPSG_4326,
      //               fields, euclidFeatures, "uniqueId_000");

   }


   //   private static IPolygon2D createEuclidPolygon(final GProjection projection,
   //                                                 final com.vividsolutions.jts.geom.Polygon jtsPolygon) {
   //      final ISimplePolygon2D outerEuclidPolygon = createPolygon(jtsPolygon.getCoordinates(), projection);
   //
   //      final int holesCount = jtsPolygon.getNumInteriorRing();
   //      if (holesCount == 0) {
   //         return outerEuclidPolygon;
   //      }
   //
   //
   //      final List<ISimplePolygon2D> euclidHoles = new ArrayList<ISimplePolygon2D>(holesCount);
   //      for (int j = 0; j < holesCount; j++) {
   //         final com.vividsolutions.jts.geom.LineString jtsHole = jtsPolygon.getInteriorRingN(j);
   //
   //         try {
   //            final ISimplePolygon2D euclidHole = createPolygon(jtsHole.getCoordinates(), projection);
   //            euclidHoles.add(euclidHole);
   //         }
   //         catch (final IllegalArgumentException e) {
   //            //                              System.err.println(e.getMessage());
   //         }
   //      }
   //
   //      final IPolygon2D euclidPolygon;
   //      if (euclidHoles.isEmpty()) {
   //         euclidPolygon = outerEuclidPolygon;
   //      }
   //      else {
   //         euclidPolygon = new GComplexPolygon2D(outerEuclidPolygon, euclidHoles);
   //      }
   //      // System.out.println("Found polygon with " + holesCount + " holes");
   //
   //      return euclidPolygon;
   //
   //   }
   //
   //
   //   private static IBoundedGeometry2D<? extends IFinite2DBounds<?>> createEuclidMultiPoint(final GeometryAttribute geometryAttribute,
   //                                                                                          final GProjection projection) {
   //      final com.vividsolutions.jts.geom.MultiPoint multipoint = (com.vividsolutions.jts.geom.MultiPoint) geometryAttribute.getValue();
   //
   //      if (multipoint.getNumGeometries() == 1) {
   //         final com.vividsolutions.jts.geom.Point jtsPoint = (com.vividsolutions.jts.geom.Point) multipoint.getGeometryN(0);
   //         return createPoint(jtsPoint.getCoordinate(), projection);
   //      }
   //
   //      final IVector2[] euclidPoints = new IVector2[multipoint.getNumGeometries()];
   //
   //      for (int i = 0; i < euclidPoints.length; i++) {
   //         final com.vividsolutions.jts.geom.Point jtsPoint = (com.vividsolutions.jts.geom.Point) multipoint.getGeometryN(i);
   //         euclidPoints[i] = createPoint(jtsPoint.getCoordinate(), projection);
   //      }
   //
   //      return new GMultiGeometry2D<IVector2>(euclidPoints);
   //   }
   //
   //
   //   private static IGlobeFeature<IVector2, IBoundedGeometry2D<? extends IFinite2DBounds<?>>> createFeature(final IBoundedGeometry2D<? extends IFinite2DBounds<?>> geometry,
   //                                                                                                          final SimpleFeature feature) {
   //      return new GGlobeFeature<IVector2, IBoundedGeometry2D<? extends IFinite2DBounds<?>>>(geometry, feature.getAttributes());
   //   }
   //
   //
   //   private static ISimplePolygon2D createPolygon(final com.vividsolutions.jts.geom.Coordinate[] jtsCoordinates,
   //                                                 final GProjection projection) {
   //      final List<IVector2> points = removeConsecutiveEqualsPoints(removeConsecutiveEqualsPoints(removeConsecutiveEqualsPoints(removeConsecutiveEqualsPoints(removeLastIfRepeated(convert(
   //               jtsCoordinates, projection))))));
   //
   //      return GShapeUtils.createPolygon2(false, points);
   //   }
   //
   //
   //   private static IPolygonalChain2D createLine(final com.vividsolutions.jts.geom.Coordinate[] jtsCoordinates,
   //                                               final GProjection projection) {
   //      final List<IVector2> points = removeConsecutiveEqualsPoints(removeConsecutiveEqualsPoints(removeConsecutiveEqualsPoints(removeConsecutiveEqualsPoints(removeLastIfRepeated(convert(
   //               jtsCoordinates, projection))))));
   //
   //      return GShapeUtils.createLine2(false, points);
   //   }
   //
   //
   //   private static IVector2 createPoint(final com.vividsolutions.jts.geom.Coordinate coordinate,
   //                                       final GProjection projection) {
   //
   //      if (projection.isLatLong()) {
   //         return new GVector2D(Math.toRadians(coordinate.x), Math.toRadians(coordinate.y));
   //      }
   //
   //      return new GVector2D(coordinate.x, coordinate.y).reproject(projection, GProjection.EPSG_4326);
   //   }


   //   public static void main(final String[] args) throws IOException {
   //      System.out.println("GShapeLoader 0.1");
   //      System.out.println("----------------\n");
   //
   //      final GFileName samplesDirectory = GFileName.absolute("home", "dgd", "Desktop", "sample-shp");
   //
   //      final GFileName fileName = GFileName.fromParentAndParts(samplesDirectory, "shp", "great_britain.shp", "roads.shp");
   //      //      final GFileName fileName = GFileName.fromParentAndParts(samplesDirectory, "cartobrutal", "world-modified", "world.shp");
   //      //      final GFileName fileName = GFileName.fromParentAndParts(samplesDirectory, "shp", "argentina.shp", "places.shp");
   //
   //      final IGlobeFeatureCollection<IVector2, ? extends IBoundedGeometry2D<? extends IFinite2DBounds<?>>> features = GShapeLoader.readFeatures(
   //               fileName, GProjection.EPSG_4326);
   //
   //
   //      System.out.println(features);
   //   }

}
