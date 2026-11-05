
/* JUS-SCENE jus_Scene30_Create [scene-map] scene table 0209e32c row 30 create; slot-1 overlay 5 */

void jus_Scene30_Create(void)

{
  int iVar1;
  
  iVar1 = iRam0206fbe0;
  *(undefined1 *)(iRam0206fbe0 + 0x17) = 1;
                    /* WARNING: Could not recover jumptable at 0x0206fbdc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0206fbe4)(*(undefined4 *)(iVar1 + 0x110));
  return;
}

