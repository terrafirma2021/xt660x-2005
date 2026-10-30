# Site imagery and typography

This is an independent Yamaha ECU research project, not an official Yamaha Motor website. Yamaha names and marks identify the motorcycles and remain the property of their respective owners. No endorsement is implied.

## Yamaha Motor logo

The header uses Yamaha Motor’s tuning-fork emblem and wordmark, sourced from its [official header asset](https://global.yamaha-motor.com/shared/img/rwd_identity.png), served locally as `site/assets/yamaha-motor-logo.png`. The source pixels are unchanged. Dark mode displays the transparent mark in white through CSS for contrast. This mark identifies the motorcycle manufacturer; the independent-project notice above applies.

## Motorcycle photograph

The blue 2005 XT660X reference photograph is sourced from the [2ri motorcycle image archive](https://www.2ri.de/Images/Big/0/Yamaha_XT660X_2005.jpg). The original image is retained. The hero uses a transparent cutout made with the built-in image-generation tool for light/dark backgrounds; it is presentation artwork, not technical evidence. Photo rights remain with the original rights holder; this project does not claim ownership or grant a new licence to that image.

The user-supplied action photograph informed the visual direction; it is not used as a photograph of the XT660X.

## Additional model photographs

The model selector and selected-bike panel now include all four motorcycle families. These are reference photographs, not evidence of a selected ECU, market, ABS configuration, paint scheme or exact year. Captions retain the photograph's reference year.

| Model reference | Source image | Local asset |
|---|---|---|
| XT660R, 2004 | [2ri archive](https://www.2ri.de/Images/Big/0/Yamaha_XT660R_2004.jpg) | `site/assets/xt660r-2004.jpg` |
| XT660Z Ténéré, 2008 | [2ri archive](https://www.2ri.de/Images/Big/0/Yamaha_XT660Z_Tenere_2008_56338.jpg) | `site/assets/xt660z-2008.jpg` |
| TDM900, 2002 | [2ri archive](https://www.2ri.de/Images/Big/0/Yamaha_TDM900_2002.jpg) | `site/assets/tdm900-2002.jpg` |

These three photographs are served with their source pixels unchanged, in a studio-image frame. No watermark was removed. The rejected watermarked TDM image is not included. Rights remain with the original rights holders; this project does not grant a new image licence. Asset hashes are recorded with each model in `dataset/vehicles.json`.

## Fonts

Barlow Regular and SemiBold, and Barlow Condensed ExtraBold Italic, by Jeremy Tribby, are served locally. Source: [Google Fonts Barlow](https://github.com/google/fonts/tree/main/ofl/barlow) and [Barlow Condensed](https://github.com/google/fonts/tree/main/ofl/barlowcondensed). The accompanying SIL Open Font License files are retained in `site/assets/fonts/`.

The map preview uses actual stored values from this repository's map catalogue. It is a raw-value visualization, not an engineering-unit or tuning-readiness claim.

## Cutout edit brief

Input: `site/assets/xt660x-2005.jpg`. Output: `site/assets/xt660x-2005-cutout.png`. Method: built-in image-generation tool, transparent background enabled.

Prompt: Remove only the white studio background, including gaps between spokes and frame components. Preserve the blue 2005 XT660X, its geometry, wheels, mirrors, engine, exhaust, decals, colours and photographic details; retain the full motorcycle and original composition. No new objects, text, background or baked checkerboard. Intended for both light and dark website backgrounds.
