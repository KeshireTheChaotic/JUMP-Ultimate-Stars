
void FUN_02082984(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  
  for (puVar4 = *(undefined4 **)(param_1 + 0xc0); puVar4 != (undefined4 *)0x0;
      puVar4 = (undefined4 *)*puVar4) {
    iVar3 = *(int *)(puVar4[2] + 0xc);
    iVar1 = *(int *)(puVar4[2] + 8);
    iVar6 = *(int *)(iVar3 + 0x1c);
    iVar5 = *(int *)(iVar1 + 0x1c);
    uVar2 = FUN_0207bf50(*(undefined4 *)(iVar6 + 0xc),*(undefined4 *)(iVar5 + 0xc),1,iVar3,iVar1,
                         (int)*(char *)(*(int *)(iVar6 + 0x10) + 0xc),
                         (int)*(char *)(*(int *)(iVar6 + 0x10) + 0xd),param_4);
    iVar1 = *(int *)(param_1 + 0xd8);
    FUN_02037c24(param_1 + 0xd8,iVar1);
    *(undefined4 *)(iVar1 + 8) = uVar2;
    FUN_02037b98(*(int *)(iVar5 + 0xc) + 0x28,iVar1);
    iVar1 = *(int *)(param_1 + 0xd8);
    FUN_02037c24(param_1 + 0xd8,iVar1);
    *(undefined4 *)(iVar1 + 8) = uVar2;
    FUN_02037b98(*(int *)(iVar6 + 0xc) + 0x28,iVar1);
  }
  return;
}

