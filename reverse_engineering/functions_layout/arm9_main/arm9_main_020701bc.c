
/* JUS-SCENE jus_Scene36_Exit [scene-map] scene table 0209e32c row 36 exit; slot-1 overlay 7 */

void jus_Scene36_Exit(char *param_1,int param_2)

{
  if ((param_2 == 0) || (param_2 != 1)) {
    *(int *)(iRam020701ec + 0x18c) = (int)*param_1;
    return;
  }
  *(int *)(iRam020701ec + 0x18c) = (int)param_1[1];
  return;
}

