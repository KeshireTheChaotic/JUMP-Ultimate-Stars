
/* JUS-SCENE jus_Scene37_CreateImpl [scene-map] called by scene 37 create wrapper 020701f0 while
   overlay 7 is resident */

void jus_Scene37_CreateImpl(int param_1)

{
  if ((param_1 == 0) || (param_1 != 1)) {
    CommuMenuEntryDataEnt::CommuMenuEntryDataEnt_Add_Core(0);
    return;
  }
  CommuMenuEntryDataEnt::CommuMenuEntryDataEnt_Add_Core(5);
  return;
}

