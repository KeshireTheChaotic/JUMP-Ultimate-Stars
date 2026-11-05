
/* JUS-CLASS jus_Class_0209df4c::vfunc_22 [class-virtual] slot 22 of vtable 0209df4c (own slot, not
   inherited) */

void jus_Class_0209df4c::vfunc_22
               (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  short sVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  
  if ((*(byte *)(param_1 + 0x14) & 4) != 0) {
    iVar4 = (int)*(short *)(param_1 + 0x10);
    iVar3 = (int)*(short *)(param_1 + 0x12);
    if (iVar3 < iVar4) {
      sVar1 = *(short *)(param_1 + 8);
      sVar2 = FUN_0200d12c((int)*(short *)(param_1 + 0xc) - (int)sVar1,iVar4 - iVar3,iVar4,param_4,
                           param_4);
      *(short *)(param_1 + 8) = sVar1 + sVar2;
      sVar1 = *(short *)(param_1 + 10);
      sVar2 = FUN_0200d12c((int)*(short *)(param_1 + 0xe) - (int)sVar1,
                           (int)*(short *)(param_1 + 0x10) - (int)*(short *)(param_1 + 0x12));
      *(short *)(param_1 + 10) = sVar1 + sVar2;
    }
    else if (iVar3 == iVar4) {
      *(undefined2 *)(param_1 + 8) = *(undefined2 *)(param_1 + 0xc);
      *(undefined2 *)(param_1 + 10) = *(undefined2 *)(param_1 + 0xe);
    }
    else {
      *(undefined2 *)(param_1 + 0x12) = 0;
      *(byte *)(param_1 + 0x14) = *(byte *)(param_1 + 0x14) & 0xf9;
    }
    *(short *)(param_1 + 0x12) = *(short *)(param_1 + 0x12) + 1;
  }
  sVar1 = *(short *)(param_1 + 10);
  piVar5 = *(int **)(*(int *)(param_1 + 4) + 0x50);
  piVar5[3] = (int)*(short *)(param_1 + 8) << 0xc;
  piVar5[4] = (int)sVar1 << 0xc;
  if (*(byte *)(piVar5 + 9) != (*(byte *)(piVar5 + 9) | 1)) {
    (**(code **)(*piVar5 + 0x18))();
  }
  *(byte *)(piVar5 + 9) = *(byte *)(piVar5 + 9) | 0x31;
  if ((*(byte *)(param_1 + 0x14) & 2) == 0) {
    *(uint *)(*(int *)(param_1 + 4) + 0x80) = (uint)((*(byte *)(param_1 + 0x14) & 1) != 0);
  }
  else {
    *(undefined4 *)(*(int *)(param_1 + 4) + 0x80) = 1;
  }
  *(byte *)(param_1 + 0x14) = *(byte *)(param_1 + 0x14) & 0xfe;
  return;
}

