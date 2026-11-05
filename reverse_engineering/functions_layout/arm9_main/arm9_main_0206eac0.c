
/* JUS-SCENE jus_Scene06_Exit [scene-map] scene table 0209e32c row 6 exit; slot-1 overlay 1 */

void jus_Scene06_Exit(char *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = iRam0206eb0c;
  if (param_2 == 0) {
    *(int *)(iRam0206eb0c + 0x18c) = (int)param_1[1];
    return;
  }
  if (param_2 == 1) {
    *(int *)(iRam0206eb0c + 0x18c) = (int)*param_1;
    return;
  }
  if (param_2 == 2) {
    *(undefined1 *)(iRam0206eb0c + 0x15) = 0;
    *(undefined4 *)(iVar1 + 0x18c) = 0x25;
  }
  return;
}

