
/* JUS-CLASS jus_TagSPD2::vfunc_06 [class-virtual] slot 6 of vtable 02096068 (own slot, not
   inherited) */

void jus_TagSPD2::vfunc_06(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  FUN_02014d94();
  if (param_2 != 0) {
    return;
  }
  iVar2 = *(int *)(param_1 + 0x50);
  if (iVar2 == 0) {
    return;
  }
  iVar1 = FUN_0201a9ec(iVar2);
  if (iVar1 == 0) {
    FUN_0201a958(iVar2,1);
  }
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0xffffffff;
  return;
}

