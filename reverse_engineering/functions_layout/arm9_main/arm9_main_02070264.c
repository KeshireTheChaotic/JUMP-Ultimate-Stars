
/* JUS-SCENE jus_Scene42_Exit [scene-map] scene table 0209e32c row 42 exit; slot-1 overlay 7 */

void jus_Scene42_Exit(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  switch(param_2) {
  case 0:
  default:
    DAT_020afde8 = 0;
    break;
  case 1:
    DAT_020afde8 = 0xc;
    break;
  case 2:
    DAT_020afde8 = 0xe;
    break;
  case 3:
    DAT_020afde8 = 0xf;
    break;
  case 4:
    FUN_0207003c(1);
    return;
  case 5:
    FUN_0207003c(2);
    return;
  }
  FUN_0206e574(0x23,0,&DAT_020afcb0,DAT_020afde8,param_4);
  return;
}

