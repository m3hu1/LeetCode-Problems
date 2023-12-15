/**
 * @param {string[][]} paths
 * @return {string}
 */
var destCity = function(paths) {
  const outgoingCities = new Set(paths.map(([src]) => src));
  const destinations = paths.map(([_, dest]) => dest);
  return destinations.find((dest) =>!outgoingCities.has(dest)) || "";
};