# Animation field controls

Select a node or track in the timeline. Selecting a key also seeks to its frame.
The Inspector shows the frame being edited. On a keyed track without a selected
key, Apply value creates a key at the playhead. Static tracks retain their
whole-move scope. Each applied change has one undo step.

- Position and scale: individual X/Y/Z controls; 20.12 values display in units.
- 2DPos and collision rectangles: component controls plus viewport dragging.
- Alpha: opacity entry and slider. DrawPrio: signed priority entry.
- Flip, visibility, depth and collision enable: independent checkboxes.
- EffectFlags: individual bits, including unnamed bits, with explanatory tooltips.
- Color: individual stored RGBA components, colour picker and colour swatch.
- CollisionType: global/character descriptor table and descriptor index.
- Marker: numeric label plus jump-label and auto-jump presets.
- BlendMode and LifeType: numeric values and conservative presets. Unknown
  policies and blend equations are not assigned invented names.
- 2DRot: stored-angle control. PatternNo: frame selector, sharing the runtime
  selector with BoundsIndex; avoid conflicting tracks.

TextureID, BoundsIndex, PatternNo and GenerateID have searchable, paged thumbnail
pickers and selected-resource previews. Images come from decoded source sprites;
effect thumbnails use an early visible authored pose. Missing resources remain
selectable numerically and are marked as lacking an image. Thumbnails do not
simulate conditional combat or projectile behavior.

**+ Track** opens native controls for the initial value and supports either a
key at the current frame or a static track. The existing NoteTrack event editor
remains available through **Event**. Text/raw editing remains available as a
fallback. Native editing does not add previously unsupported viewport rendering
for every ALMT property.

NoteTrack audio events (0x0400–0x0402) have **Choose cue**, **Preview** and **Stop**
controls. The chooser filters original sound names or indices and can preview
each selection automatically when enabled. Special cues offer a Koma-size
preview choice where the bank depends on deployment. Use cue updates the event
form; Apply event changes and Save NoteTrack retain it. Auditioning alone never
changes event bytes. Closing the dialog stops previews and restores preparation
of the current move's sound cues. Preview synthesis retains the existing
Nitro playback approximation warnings.

Shot-source records can be edited from the shot timeline inspector or Archive
inspector. Apply record changes only the dialog's working copy and records local
undo. Stage and close stages the data for the main Save command. Cancel discards
the working copy. Record parameters retain their numeric meaning where it
depends on the handler. Animation references offer source thumbnail pickers.

AI attack-profile and navigation previews, controls and archive summaries are
removed from the UI; AI data is not edited.
