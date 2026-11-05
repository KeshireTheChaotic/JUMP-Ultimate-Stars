
/* JUS-SCENE jus_Scene22_Exit [scene-map] scene table 0209e32c row 22 exit; slot-1 overlay 1 */

void jus_Scene22_Exit(char *param_1,uint param_2)

{
  int iVar1;
  
  if ((param_2 & 0xff00) == 0) {
    *(int *)(iRam0206f730 + 0x18c) = (int)*param_1;
  }
  else {
    iVar1 = FUN_0207060c();
    if (iVar1 == 0) {
      FUN_0206e524(1,4,0xc,0x16,1);
    }
    else {
      FUN_0206e524(1,5,0xc,0x16,1);
    }
    FUN_0206e524(0,0xc,0x19,0x15,2);
    FUN_0206e524(0,0x19,0x1a,0xffffffff,0);
    FUN_0206e524(0,0x1a,0x16,0x15,0x12);
  }
  *(uint *)(param_1 + 4) = param_2;
  return;
}

