
/* JUS-SCENE jus_Scene10_Exit [scene-map] scene table 0209e32c row 10 exit; slot-1 overlay 5 */

void jus_Scene10_Exit(int param_1)

{
  *(int *)(iRam0206e5e0 + 0x18c) = (int)*(char *)(param_1 + 1);
  return;
}

