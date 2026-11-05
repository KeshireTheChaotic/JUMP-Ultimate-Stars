
/* JUS-SCENE jus_Scene16_Exit [scene-map] scene table 0209e32c row 16 exit; slot-1 overlay 2 */

void jus_Scene16_Exit(int param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  switch(param_2 & 0xf) {
  case 0:
    FUN_0206e574(3,0,param_3,param_4,param_4);
    break;
  case 1:
    FUN_0206e524(1,0x1d,0x10,0xffffffff,0);
    break;
  case 2:
    FUN_0206e524(1,4,0xc,0x10,7);
    break;
  case 3:
    FUN_0206e524(1,0x11,4,0x10,0);
    *(undefined4 *)(param_1 + 4) = 2;
    return;
  }
  *(int *)(param_1 + 4) = (int)*(char *)(iRam0206f144 + ((int)param_2 >> 4 & 0xfU));
  return;
}

