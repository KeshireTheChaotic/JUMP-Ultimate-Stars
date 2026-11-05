
/* JUS-SCENE jus_Scene24_Exit [scene-map] scene table 0209e32c row 24 exit; slot-1 overlay 3 */

void jus_Scene24_Exit(int param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  
  uVar1 = (param_2 & 0xff00) >> 8;
  if (uVar1 == 1) {
    FUN_0206e574(0x15,0,param_3,param_4,param_4);
    return;
  }
  if (uVar1 == 2) {
    FUN_0206e524(1,0x1b,0x15,0xffffffff,*(undefined4 *)(param_1 + 4));
    return;
  }
  *(int *)(iRam0206f9b4 + 0x18c) = (int)*(char *)(param_1 + 1);
  return;
}

