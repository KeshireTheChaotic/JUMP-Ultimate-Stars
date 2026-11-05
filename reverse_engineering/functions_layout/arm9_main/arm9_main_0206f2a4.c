
/* JUS-SCENE jus_Scene18_Exit [scene-map] scene table 0209e32c row 18 exit; slot-1 overlay 4 */

void jus_Scene18_Exit(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_0207120c(0x20,1);
  if (*(char *)(iRam0206f2f8 + 3) == -1) {
    *(int *)(iRam0206f2fc + 0x18c) = (int)*(char *)(param_1 + 1);
  }
  else {
    FUN_0206e524(1,0xe,0xc,0xffffffff,(int)*(char *)(iRam0206f2f8 + 3),param_4);
  }
  return;
}

