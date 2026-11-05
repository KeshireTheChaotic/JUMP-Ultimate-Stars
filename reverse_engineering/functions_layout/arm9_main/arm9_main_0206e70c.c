
/* JUS-SCENE jus_Scene03_Exit [scene-map] scene table 0209e32c row 3 exit; slot-1 overlay 0 */

void jus_Scene03_Exit(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  switch(param_2) {
  case 0:
    FUN_0206e524(1,0x10,0xffffffff,0xffffffff,0,param_4);
    break;
  case 1:
    FUN_0206e524(1,0x15,0xffffffff,0xffffffff,0,param_4);
    break;
  case 2:
    FUN_0206e524(1,0x23,0xffffffff,0xffffffff,0,param_4);
    break;
  case 3:
    FUN_0206e524(1,0x1f,3,0xffffffff,0,param_4);
    break;
  case 4:
    FUN_0206e524(1,4,0xffffffff,3,7,param_4);
    break;
  case 5:
    FUN_0206e524(1,0x1d,3,0xffffffff,0,param_4);
    break;
  case 6:
    FUN_0206e524(1,0x20,3,0xffffffff,0,param_4);
    break;
  case 7:
    FUN_0206e524(1,0x22,3,0xffffffff,0,param_4);
    break;
  case 8:
    FUN_0206e524(1,2,3,0xffffffff,1,param_4);
  }
  if (param_2 != 8) {
    *(char *)(iRam0206e880 + 0x10) = (char)param_2;
  }
  *(undefined1 *)(iRam0206e880 + 0x18) = 0;
  return;
}

