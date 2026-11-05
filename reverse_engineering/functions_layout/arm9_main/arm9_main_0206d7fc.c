
void FUN_0206d7fc(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  undefined2 uVar2;
  int iVar3;
  undefined2 *puVar4;
  byte *pbVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  undefined1 auStack_2c [4];
  undefined4 uStack_28;
  
  if (*(char *)(param_1 + 0x5e) != '\0') {
    *(undefined1 *)(param_1 + 0x5e) = 0;
    iVar8 = 1;
    pbVar5 = (byte *)(param_1 + 0x40);
    uStack_28 = param_4;
    for (iVar6 = *(int *)(param_1 + 0x48); iVar6 != 0; iVar6 = iVar6 + -1) {
      puVar4 = &DAT_020afc7c;
      for (uVar7 = (uint)*pbVar5; uVar7 != 0; uVar7 = uVar7 - 1) {
        uVar2 = (**(code **)(&DAT_0209e28c + *(char *)(param_1 + 0x5d) * 4))();
        *puVar4 = uVar2;
        puVar4 = puVar4 + 1;
      }
      bVar1 = *pbVar5;
      FUN_0206d42c(auStack_2c,param_2);
      iVar3 = FUN_0206d3e8(auStack_2c);
      FUN_02029c68(*(undefined4 *)(iVar3 + 4),&DAT_020afc7c,iVar8,bVar1);
      iVar8 = iVar8 + 0x10;
      pbVar5 = pbVar5 + 1;
    }
  }
  return;
}

