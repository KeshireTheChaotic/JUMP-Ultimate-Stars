
/* JUS-SCENE jus_Scene04_Exit [scene-map] scene table 0209e32c row 4 exit; slot-1 overlay 1 */

void jus_Scene04_Exit(char *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 unaff_r4;
  
  if (*(char *)(iRam0206ea68 + 0x14) != '\0') {
    *(undefined4 *)(iRam0206ea68 + 0x18c) = 7;
    return;
  }
  switch(param_2) {
  case 0:
  default:
    if ((*(char *)(iRam0206ea68 + 0x18) == '\0') && (iVar1 = FUN_02086bd4(), iVar1 == 0)) {
      func_0x0206e590(param_1,0);
    }
    else {
      *(int *)(iRam0206ea68 + 0x18c) = (int)param_1[1];
    }
    break;
  case 1:
    if ((*(char *)(iRam0206ea68 + 0x18) == '\0') && (iVar1 = FUN_02086bd4(), iVar1 == 0)) {
      func_0x0206e5b0(param_1,0);
    }
    else {
      *(int *)(iRam0206ea68 + 0x18c) = (int)*param_1;
    }
    break;
  case 2:
    FUN_0206e524(1,8,9,4,0,param_4);
    FUN_0206e524(0,9,4,0xffffffff,0);
    iVar1 = iRam0206ea68;
    *(undefined4 *)(iRam0206ea68 + 0xc) = 0;
    *(undefined1 *)(iVar1 + 0x13) = 1;
    break;
  case 3:
    FUN_0206e524(1,8,4,4,1,param_4);
    iVar1 = iRam0206ea68;
    *(undefined4 *)(iRam0206ea68 + 0xc) = 0;
    *(undefined1 *)(iVar1 + 0x13) = 1;
    break;
  case 4:
    FUN_0206e524(1,9,4,0xffffffff,1,param_4);
    iVar1 = iRam0206ea68;
    *(undefined4 *)(iRam0206ea68 + 0xc) = 0;
    *(undefined1 *)(iVar1 + 0x13) = 1;
    break;
  case 5:
    goto code_r0x0206ea28;
  case 6:
code_r0x0206ea28:
    *(int *)(iRam0206ea68 + 0x18c) = (int)*param_1;
  }
  if (*(char *)(iRam0206ea68 + 0x15) != '\0') {
    *(undefined1 *)(iRam0206ea68 + 0x15) = 0;
    if (param_2 == 0) {
      unaff_r4 = 1;
    }
    if (param_2 == 1) {
      unaff_r4 = 2;
    }
    *(undefined4 *)(iRam0206ea68 + 0x148) = unaff_r4;
  }
  return;
}

