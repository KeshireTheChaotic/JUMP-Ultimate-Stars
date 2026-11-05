
/* JUS-SCENE jus_Scene01_Exit [scene-map] scene table 0209e32c row 1 exit; slot-1 overlay 0 */

void jus_Scene01_Exit(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  if (param_2 == 0) {
    *(undefined4 *)(iRam0206e670 + 0x18c) = 2;
  }
  else if (param_2 == 1) {
    FUN_0206e574(2,0,param_3,param_4,param_4);
  }
  FUN_0207120c(1,0);
  return;
}

