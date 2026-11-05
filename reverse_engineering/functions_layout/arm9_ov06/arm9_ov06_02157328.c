
void FUN_02157328(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 uVar3;
  
  uVar1 = FUN_02157434(*(undefined4 *)(param_1 + 0x1a8));
  FUN_0215f324(*(undefined4 *)(param_1 + 0x1a0));
  FUN_0215f138(*(undefined4 *)(param_1 + 0x1a0),param_2);
  FUN_021585b8(param_1);
  FUN_0215c050(param_1);
  FUN_021590fc(param_1,0,0xc);
  FUN_021590fc(param_1,0,0xe);
  FUN_021590fc(param_1,0,0xf);
  FUN_021590fc(param_1,0,0x23);
  FUN_021590fc(param_1,0,0x24);
  uVar3 = *(undefined4 *)(*(int *)(param_1 + 0x1a8) + 0x18);
  FUN_021554d0(uVar3,**(undefined4 **)(param_1 + 0x1a0));
  FUN_02157114(param_1,uVar3);
  uVar2 = *(uint *)(*(int *)(param_1 + 0x1a0) + 0x1bc);
  if (0x17 < uVar2) {
    uVar2 = 0;
  }
  FUN_02157450(param_1,uVar2);
  FUN_02083950(*(undefined4 *)(param_1 + 0x1a8),uVar1);
  if (*(char *)(param_1 + 0x1e6) == '\x03') {
    (**(code **)(**(int **)(*(int *)(*(int *)(**(int **)(*(int *)(param_1 + 0x1a0) + 0x174) + 0xc) +
                                    4) + 0x68) + 0xfc))();
    return;
  }
  return;
}

