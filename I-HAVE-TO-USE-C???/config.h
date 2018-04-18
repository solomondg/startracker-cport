//
// Created by solomon on 4/17/18.
//


#ifndef CONFIG
#define CONFIG
#endif

//
// Created by solomon on 4/17/18.
//

#ifndef BOOL
#define BOOL
#include <stdbool.h>
#endif

#ifndef WOOSH_YOU_NOW_HAVE_FAST_STAR_TRACKER_CONFIG_H
#define WOOSH_YOU_NOW_HAVE_FAST_STAR_TRACKER_CONFIG_H

#endif //WOOSH_YOU_NOW_HAVE_FAST_STAR_TRACKER_CONFIG_H


// directory containing input images
const char* image_directory = "./pics";

// boolean for whether or not to display an annotated version
// of the image with identified stars circled in green and
// unmatched catalog stars circled in red
const bool show_solution = true;

// maximum fields of view of catalog patterns in degrees
// determines approximately what image fields of view
// can be identified by the algorithm
const int max_fovs [11] = {10, 15, 20, 25, 30, 35, 40, 45, 50, 55, 60};

// radius around image stars to search for matching catalog stars
// as a fraction of image field of view in x dimension
const float match_radius = .01;

// maximum error in edge ratios
const float max_error = .01;

// image downsampling factor for median filtering
const float downsample_factor = 2;

// median filter window radius in down-sampled image pixels

#define FILTER_RADIUS 2
const int filter_radius = FILTER_RADIUS;
const int filter_width = FILTER_RADIUS * 2 + 1;

// percentage of pattern catalog that stores values
const float catalog_fill_factor = .5;

// number of divisions along each dimension of the pattern catalog
const int num_catalog_bins = 25;

// maximum number of pattern catalog stars within
// the maximum fov centered on any given pattern catalog star
const int max_stars_per_fov = 10;

// minimum star brightness magnitude
const float magnitude_minimum = 5.0;

// minimum allowable angle between star vectors in radians
// used to remove double stars
const float min_angle = .002;

// number of stars to use in each pattern
const int pattern_size = 5;

// minimum number of pixels in a group of bright pixels
// needed to classify the group as a star
const int min_pixels_in_group = 3;

// centroiding window radius around a star's center pixel
// does not count the center pixel
const int window_radius = 2;

// maximum number of bright stars to check against pattern catalog
const int max_pattern_checking_stars = 8;

// maximum probability of mismatch for verifying an attitude determination
const double max_mismatch_probability = 1e-20;

// percentage of fine sky map that stores values
const float fine_sky_map_fill_factor = .5;

// number of divisions to break a single radius of
// the celestial sphere into for rapid star lookup
const int num_fine_sky_map_bins = 100;

// percentage of course sky map that stores values
const float course_sky_map_fill_factor = .5;

// number of divisions to break a single radius of
// the celestial sphere into for rapid star lookup
const int num_course_sky_map_bins = 4;

// constant used for randomizing hash functions
const long avalanche_constant = 2654435761;

