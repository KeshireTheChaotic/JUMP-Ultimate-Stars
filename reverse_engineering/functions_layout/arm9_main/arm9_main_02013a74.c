
/* JUS-CLASS jus_TagIPCT::vfunc_39 [class-virtual] slot 39 of vtable 0209aea0 (own slot, not
   inherited) */

void jus_TagIPCT::vfunc_39(int param_1,uint param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  bool bVar4;
  
  uVar1 = *(uint *)(param_1 + 0x40);
  bVar4 = (uVar1 & 2) == 0;
  if (bVar4) {
    uVar1 = param_2 + 1;
  }
  if (bVar4) {
    param_2 = uVar1 >> 1;
  }
  if (*(uint *)(param_1 + 0x38) == param_2) {
    return;
  }
  uVar2 = FUN_0200d338(*(int *)(param_1 + 0x3c) * param_2);
  *(undefined4 *)(param_1 + 0x3c) = uVar2;
  *(uint *)(param_1 + 0x38) = param_2;
  iVar3 = (**(code **)(**(int **)(param_1 + 0x2c) + 0x68))
                    (*(int **)(param_1 + 0x2c),*(undefined4 *)(param_1 + 0x30));
  *(short *)(*(int *)(param_1 + 0x34) +
            ((iVar3 + 1U >> 1) + 1 + (uint)(*(ushort *)(*(int *)(param_1 + 0x48) + 4) >> 1)) * 2) =
       (short)param_2;
  return;
}

