
/* JUS-CLASS jus_Class_02161020::vfunc_04 [class-virtual] slot 4 of vtable 02161020 (own slot, not
   inherited) */

int jus_Class_02161020::vfunc_04(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  uVar2 = *(uint *)(param_1 + 8) & 0xfffffe00;
  iVar4 = *(uint *)(param_1 + 8) - uVar2;
  uVar3 = param_3 + iVar4;
  if ((uVar3 & 0x1ff) != 0) {
    uVar3 = (uVar3 & 0xfffffe00) + 0x200;
  }
  FUN_020643f4(*(undefined4 *)(param_1 + 0xc),uVar2,0);
  iVar1 = FUN_02064440(*(undefined4 *)(param_1 + 0xc),param_2,uVar3);
  if (iVar1 == -1) {
    return 0;
  }
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + param_3;
  *(undefined1 *)(param_1 + 0x10) = 1;
  return iVar4;
}

