
/* JUS-SCENE jus_Scene11_Exit [scene-map] scene table 0209e32c row 11 exit; slot-1 overlay 6 */

void jus_Scene11_Exit(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = iRam0206ecdc;
  if (param_2 == 3) {
    uVar2 = 0xb;
  }
  else {
    *(undefined1 *)(iRam0206ecdc + 0x17) = 1;
    uVar2 = 9;
  }
  *(undefined4 *)(iVar1 + 0x18c) = uVar2;
  return;
}

