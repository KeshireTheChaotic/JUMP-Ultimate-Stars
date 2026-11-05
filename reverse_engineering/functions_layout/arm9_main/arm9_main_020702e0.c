
/* JUS-SCENE jus_Scene43_Exit [scene-map] scene table 0209e32c row 43 exit; slot-1 overlay 7 */

void jus_Scene43_Exit(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  if (param_2 == 0) {
    DAT_020afe3c = 0x2c;
    return;
  }
  if ((param_2 == 1) || (param_2 != 2)) {
    DAT_020afde8 = 5;
    FUN_0206e574(0x23,0,&DAT_020afcb0,5,param_4);
    return;
  }
  DAT_020afe3c = 0x23;
  return;
}

