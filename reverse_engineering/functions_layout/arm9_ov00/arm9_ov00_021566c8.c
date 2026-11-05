
void FUN_021566c8(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  undefined4 local_28;
  undefined1 auStack_24 [8];
  undefined4 local_1c;
  undefined4 local_18;
  int local_14;
  undefined4 uStack_10;
  
  iVar2 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  if ((*(char *)(iVar2 + 0x21f) != '\0') &&
     (uStack_10 = param_4, FUN_0214e27c(&local_14,*(undefined4 *)(iVar2 + 0x130)),
     0xfffff < local_14)) {
    local_1c = 0xb8000;
    local_18 = 0xfff00000;
    FUN_0214f418(*(undefined4 *)(iVar2 + 0x130),&local_18,&local_1c);
    local_28 = 0;
    FUN_02150d54(auStack_24,*(undefined4 *)(iVar2 + 0x130),s_Position_x_02161330);
    uVar1 = FUN_021567dc(auStack_24,0x494c,&local_28,0xf,0,1);
    FUN_02020f38(*(undefined4 *)(iVar2 + 0x130),uVar1);
    piVar3 = *(int **)(*(int *)(iVar2 + 0x130) + 4);
    (**(code **)(*(int *)piVar3[0x19] + 0x70))();
    (**(code **)(*piVar3 + 0xc4))();
    piVar3 = *(int **)(*(int *)(*(int *)(iVar2 + 0x130) + 4) + 100);
    (**(code **)(*piVar3 + 0x68))(piVar3,*(int *)(iVar2 + 0x138) + 0x5fe);
    *(undefined1 *)(iVar2 + 0x21f) = 0;
    FUN_02028384(*(undefined4 *)(*(int *)(iVar2 + 0x130) + 4),FUN_0215683c);
  }
  return;
}

