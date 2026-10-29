"""Motorcycle-led homepage; all preview values come from the existing map atlas."""
import json


def build_home(maps, pins, write):
    selected = ['main_quantity_A', 'main_u8_B', 'coolant_sensor_conversion']
    previews = []
    for key in selected:
        m = next(m for m in maps if m['id'] == key)
        previews.append({k: m[k] for k in ['id', 'display_name', 'data_address', 'rows', 'columns', 'element_bytes', 'raw_values']})
    write('assets/home-maps.json', json.dumps(previews, separators=(',', ':')))
    return f'''
<section class="race-hero" aria-labelledby="hero-title">
  <div class="hero-slash" aria-hidden="true"></div>
  <div class="bike-stage"><img src="assets/xt660x-2005.jpg" alt="Blue 2005 Yamaha XT660X, showing its spoked supermoto wheels, single-cylinder engine and high exhaust" width="1024" height="768" fetchpriority="high"><span class="photo-caption">XT660X / 2005 / YAMAHA</span></div>
  <div class="hero-content">
    <div class="hero-eyebrow"><span class="race-bars" aria-hidden="true"></span>YAMAHA · 2005 · SUPERMOTO</div>
    <h1 id="hero-title">XT660<span>X</span></h1>
    <p class="hero-headline">ONE CYLINDER.<br>A WORLD INSIDE.</p>
    <p class="hero-description">For the love of the big single. Get under the plastics and into the maps, signals and code that make it tick.</p>
    <div class="actions"><a class="button primary" href="maps/">EXPLORE THE MAPS <span>↗</span></a><a class="hero-secondary" href="#inside">GET UNDER THE SKIN <span>↓</span></a></div>
  </div>
  <div class="hero-bottom"><span>THE XT660X PROJECT</span><a href="#inside">SCROLL TO EXPLORE <span>↓</span></a></div>
</section>
<div class="race-strip" aria-label="Project coverage">
  <div><strong>{len(maps):02}</strong><span>MAPS &amp; CURVES</span></div><div><strong>{len(pins['pins'])}</strong><span>MCU POSITIONS</span></div><div><strong>225</strong><span>RECOVERED ROUTINES</span></div><div><strong>15,942</strong><span>DECODED INSTRUCTIONS</span></div>
</div>
<section class="inside-section" id="inside">
  <div class="section-heading"><div><div class="kicker">01 / THE CALIBRATION ROOM</div><h2>THE NUMBERS.<br>BEHIND THE NOISE.</h2></div><p>Fuel. Spark. Temperature.<br>Explore the actual values recovered from the supplied firmware.</p></div>
  <div class="map-showcase">
    <div class="map-story"><span class="small-label">STRAIGHT FROM THE BINARY</span><h3 id="preview-name">Normal load-based fuel quantity</h3><p>Every table has a story: what selects it, what reads it and what its values really mean.</p><div class="map-tabs" role="group" aria-label="Choose a map preview"><button type="button" data-map="0" aria-pressed="true">FUEL</button><button type="button" data-map="1" aria-pressed="false">IGNITION</button><button type="button" data-map="2" aria-pressed="false">COOLANT</button></div><p class="preview-meta" id="preview-meta">0x1B66 / 45 × 30 / 16-BIT</p><a class="text-link" id="preview-link" href="docs/map_details/main_quantity_A.html">OPEN THIS MAP <span>↗</span></a><p class="preview-note">Raw stored values. Physical units and assumptions are explained in each map’s evidence.</p></div>
    <div class="map-display"><div class="display-top"><span><i aria-hidden="true"></i> LIVE MAP PREVIEW</span><span id="preview-shape">45 ROWS / 30 COLUMNS</span></div><canvas id="map-preview" width="800" height="440" tabindex="0" role="img" aria-label="Fuel map values. Use arrow keys to inspect cells, or open the map for the complete values."></canvas><div class="display-bottom"><output id="preview-cell" aria-live="polite">POINT TO A CELL · ARROW KEYS TO EXPLORE</output><span>LOW <i class="scale" aria-hidden="true"></i> HIGH</span></div></div>
  </div>
</section>
<section class="machine-paths" aria-label="Explore the motorcycle electronics">
  <a class="hardware-path" href="pins/"><span class="kicker">02 / FOLLOW THE WIRES</span><h2>SMALL CHIP.<br>BIG PERSONALITY.</h2><p>Sensors in. Spark, fuel and relay commands out. Trace the connections through the MCU pin explorer.</p><div class="chip-art" aria-hidden="true"><div><small>MCU REFERENCE</small><strong>80</strong><span>PACKAGE POSITIONS</span></div></div><span class="path-cta">OPEN THE PIN EXPLORER <b>↗</b></span></a>
  <div class="research-path"><div class="kicker">03 / GO DEEPER</div><h2>EVERY PULSE<br>HAS A REASON.</h2><p>Follow the research, one system at a time.</p><div class="system-links"><a href="docs/semantics/SPARK.html"><span>01</span><strong>IGNITION &amp; TIMING</strong><b>↗</b></a><a href="docs/semantics/FUEL.html"><span>02</span><strong>FUEL &amp; INJECTION</strong><b>↗</b></a><a href="docs/semantics/COOLANT_AND_FAN.html"><span>03</span><strong>COOLANT &amp; FAN</strong><b>↗</b></a><a href="docs/semantics/RPM_AND_CUTS.html"><span>04</span><strong>RPM &amp; CUT LOGIC</strong><b>↗</b></a></div><a class="text-link" href="research/">THE COMPLETE RESEARCH LIBRARY <span>↗</span></a></div>
</section>
<section class="proof-section"><div><div class="kicker">04 / THE WORK CONTINUES</div><h2>OBSESSED WITH THE BIKE.<br>HONEST ABOUT THE EVIDENCE.</h2></div><div><p>Decoded, corroborated or still open—you can see the difference. Code checks, datasheet references and physical verification each have their own place.</p><a class="button primary" href="docs/semantics/VERIFICATION_LEDGER.html">CHECK THE VERIFICATION LEDGER <span>↗</span></a><p class="research-note">Research in progress. Physical-unit and wiring gaps remain open; this is not yet a validated tuning definition.</p></div></section>
'''
