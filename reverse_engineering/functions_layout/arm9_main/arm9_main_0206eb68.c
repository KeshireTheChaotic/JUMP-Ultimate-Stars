
/* JUS-SCENE jus_Scene07_Exit [scene-map] scene table 0209e32c row 7 exit; slot-1 overlay 1 */

void jus_Scene07_Exit(char *param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = iRam0206ebd4;
  switch(param_2) {
  case 0:
    *(int *)(iRam0206ebd4 + 0x18c) = (int)param_1[1];
    return;
  case 1:
    *(int *)(iRam0206ebd4 + 0x18c) = (int)*param_1;
    return;
  case 2:
    *(undefined1 *)(iRam0206ebd4 + 0x14) = 1;
    *(undefined4 *)(iVar1 + 0x18c) = 4;
    return;
  case 3:
    *(undefined1 *)(iRam0206ebd4 + 0x15) = 0;
    *(undefined4 *)(iVar1 + 0x18c) = 0x25;
    return;
  default:
    return;
  }
}

