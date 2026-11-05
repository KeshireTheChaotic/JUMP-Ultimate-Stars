
/* JUS-SCENE jus_Scene34_Exit [scene-map] scene table 0209e32c row 34 exit; slot-1 overlay 0 */

void jus_Scene34_Exit(undefined4 param_1,int param_2)

{
  switch(param_2) {
  case 0:
  default:
    FUN_0206e574(3,0);
    return;
  case 1:
    FUN_02070e98();
    break;
  case 2:
    FUN_02070e4c();
    break;
  case 3:
    FUN_02070ec4();
    break;
  case 4:
    FUN_02070ef4();
    break;
  case 5:
    FUN_02070e34();
  }
  if (param_2 == 5) {
    FUN_0206e574(0,1);
    DAT_020afcc0 = 0;
  }
  else {
    FUN_0206e574(3,1);
  }
  FUN_0207367c(0);
  return;
}

