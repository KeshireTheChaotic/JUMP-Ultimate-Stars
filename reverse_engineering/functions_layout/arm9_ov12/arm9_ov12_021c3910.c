
void FUN_021c3910(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  undefined4 local_10;
  undefined4 uStack_c;
  
  piVar2 = *(int **)(*(int *)(param_1 + 4) + 0x10);
  *(char *)((int)piVar2 + 0xa6) = *(char *)((int)piVar2 + 0xa6) + -4;
  uStack_c = param_4;
  iVar1 = FUN_0203b3e4();
  FUN_021c39f8(*(undefined4 *)(iVar1 + 0x88),0x3f,(int)*(char *)((int)piVar2 + 0xa6));
  if (*(char *)((int)piVar2 + 0xa6) < -0xf) {
    FUN_021c4728(piVar2);
    (*DAT_020a0e18)();
    (*DAT_020a0e18)();
    (**(code **)(**(int **)(*(int *)(piVar2[2] + 4) + 0x68) + 0x70))();
    local_10 = 0x100000;
    FUN_021b956c(piVar2[2],&local_10);
    ALNodeImp::Create(piVar2);
    if ((*(byte *)((int)piVar2 + 0xa9) & 0xf) >> 3 == 0) {
      FUN_021c3488(piVar2,0,0);
    }
    *(byte *)((int)piVar2 + 0xa9) = *(byte *)((int)piVar2 + 0xa9) & 0xfd;
    *(undefined1 *)((int)piVar2 + 0xa6) = 0xf0;
    FUN_02028384(*(undefined4 *)(*piVar2 + 4),0x21c44ed);
  }
  return;
}

