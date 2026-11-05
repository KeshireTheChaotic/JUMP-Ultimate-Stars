
/* JUS-SCENE jus_Scene28_Exit [scene-map] scene table 0209e32c row 28 exit; slot-1 overlay 1 */

void jus_Scene28_Exit(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = iRam0206fb48;
  *(undefined4 *)(param_1 + 4) = param_2;
  *(undefined4 *)(iVar1 + 0x18c) = 0x15;
  return;
}

