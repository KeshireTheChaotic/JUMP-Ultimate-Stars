
void FUN_02155ac4(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iStack_18;
  int iStack_14;
  undefined4 uStack_10;
  
  iVar3 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  *(int *)(iVar3 + 0xf0) = *(int *)(iVar3 + 0xf0) + 1;
  iStack_18 = (*(uint *)(iVar3 + 0xf0) >> 2) * -0x1000;
  iStack_14 = (*(uint *)(iVar3 + 0xf0) >> 2) << 0xc;
  uStack_10 = param_4;
  FUN_021511c8(param_1,&iStack_14,&iStack_18);
  if (*(int *)(iVar3 + 0x30) != 0) {
    *(uint *)(iVar3 + 0xec) = *(uint *)(iVar3 + 0xec) & 0xfffffffe;
    iVar1 = (**(code **)(**(int **)(*(int *)(iVar3 + 0x30) + 4) + 0x194))();
    if (*(int *)(iVar3 + 0xf4) != iVar1) {
      *(uint *)(iVar3 + 0xec) = *(uint *)(iVar3 + 0xec) | 0x31;
      uVar2 = (**(code **)(**(int **)(*(int *)(iVar3 + 0x30) + 4) + 0x194))();
      *(undefined4 *)(iVar3 + 0xf4) = uVar2;
    }
  }
  if ((*(uint *)(iVar3 + 0xec) & 0x20) != 0) {
    iVar1 = (**(code **)(*(int *)(iVar3 + 0xf8) * 4 + 0x2169d3c))();
    if (iVar1 == 0) {
      if (*(int *)(iVar3 + 0xe0) != 0) {
        FUN_0207974c();
        FUN_020796c8(*(undefined4 *)(iVar3 + 0xe0),0);
        FUN_02079a0c(*(undefined4 *)(iVar3 + 0xe0),0);
      }
    }
    else {
      if ((*(int *)(iVar3 + 0xdc) != 0) &&
         (iVar1 = FUN_02072198(*(undefined1 *)((*(uint *)(iVar3 + 0xf8) & 0xff) + 0x2169d28),
                               *(undefined1 *)
                                (iVar3 + *(uint *)(iVar3 + 0xf8) * 0x14 + *(int *)(iVar3 + 0xf4) +
                                0x178)), iVar1 != 0)) {
        FUN_020769cc(*(undefined4 *)(iVar3 + 0xdc));
      }
      if (*(int *)(iVar3 + 0xe0) != 0) {
        FUN_0207974c();
        FUN_020796c8(*(undefined4 *)(iVar3 + 0xe0),1);
        FUN_02079a0c(*(undefined4 *)(iVar3 + 0xe0),1);
        FUN_0215f3f0(*(undefined4 *)(iVar3 + 0xe0),*(undefined4 *)(iVar3 + 0xdc));
      }
    }
    *(uint *)(iVar3 + 0xec) = *(uint *)(iVar3 + 0xec) & 0xffffffdf;
  }
  if ((*(uint *)(iVar3 + 0xec) & 0x10) != 0) {
    if (*(int *)(iVar3 + 0xe4) != 0) {
      uVar2 = FUN_0207216c(*(undefined1 *)((*(uint *)(iVar3 + 0xf8) & 0xff) + 0x2169d28),
                           *(undefined1 *)
                            (iVar3 + *(uint *)(iVar3 + 0xf8) * 0x14 + *(int *)(iVar3 + 0xf4) + 0x178
                            ));
      iVar1 = (**(code **)(*(int *)(iVar3 + 0xf8) * 4 + 0x2169d3c))();
      if (iVar1 == 0) {
        uVar2 = 0;
      }
      FUN_0215effc(*(undefined4 *)(iVar3 + 0xe4),uVar2);
    }
    *(uint *)(iVar3 + 0xec) = *(uint *)(iVar3 + 0xec) & 0xffffffef;
  }
  return;
}

