
void FUN_02154558(int param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  iVar4 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  *(char *)(iVar4 + 0x35c) = (char)*(undefined4 *)(*(int *)(param_1 + 4) + 0x124);
  iVar5 = (uint)*(byte *)(iVar4 + 0x35d) * 0x3c + *(int *)(*(int *)(iVar4 + 0x330) + 0x30);
  for (iVar6 = 0; iVar6 < (int)(uint)*(byte *)(iVar5 + 0x2c); iVar6 = iVar6 + 1) {
    iVar8 = iVar5 + iVar6;
    bVar1 = *(byte *)(iVar8 + 0x2d);
    iVar3 = *(int *)(*(int *)(iVar4 + 0x330) + 0x34);
    for (iVar7 = 0; iVar7 < (int)(uint)*(byte *)((uint)bVar1 * 0x48 + iVar3 + 0x44);
        iVar7 = iVar7 + 1) {
      iVar2 = *(int *)(iVar6 * 0x28 + iVar4 + iVar7 * 4 + 0xdc);
      if (*(char *)(iVar4 + 0x35c) == *(char *)(iVar8 + 0x2d)) {
        FUN_02023820(*(undefined4 *)(iVar2 + 4),1);
      }
      else {
        FUN_02023820(*(undefined4 *)(iVar2 + 4),0);
      }
    }
  }
  return;
}

