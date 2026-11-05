
/* JUS-SCENE jus_Scene27_Exit [scene-map] scene table 0209e32c row 27 exit; slot-1 overlay 3 */

void jus_Scene27_Exit(undefined4 param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  if ((param_2 & 0xff00) == 0) {
    FUN_0206e590(param_1,0,param_3,param_4,param_4);
    return;
  }
  FUN_0206e524(1,0xf,0xc,0xffffffff,1);
  FUN_0206e524(0,0xc,0x15,0x15,1);
  return;
}

