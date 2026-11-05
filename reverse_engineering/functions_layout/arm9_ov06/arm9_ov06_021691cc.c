
void FUN_021691cc(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  
  puVar2 = *(undefined4 **)(*(int *)(param_1 + 4) + 0x10);
  iVar3 = puVar2[4];
  while (iVar3 != 0) {
    FUN_02037c24(DAT_02172994 + 0x10,iVar3);
    FUN_020517fc(iVar3,0,0x4c);
    FUN_02037b98(DAT_02172994 + 8,iVar3);
    iVar3 = puVar2[4];
  }
  puVar2 = (undefined4 *)*puVar2;
  while (puVar2 != (undefined4 *)0x0) {
    puVar4 = (undefined4 *)*puVar2;
    if ((*(byte *)((int)puVar2 + 0x3a) & 4) != 0) {
      FUN_02169344(puVar2);
    }
    if ((*(uint *)(*(int *)(puVar2[2] + 0x10) + 0x78) & 0x400000) == 0) {
      if (*(byte *)(puVar2 + 0xe) == 0) {
        iVar3 = (*(code *)(&PTR_FUN_02172720)[puVar2[7]])(puVar2);
        iVar1 = 1;
        if ((code *)puVar2[4] != (code *)0x0) {
          iVar1 = (*(code *)puVar2[4])(puVar2,puVar2[6]);
        }
        if (iVar3 == 0 || iVar1 == 0) {
          *(undefined1 *)(puVar2 + 0xe) = 1;
          iVar3 = FUN_0216908c(*(undefined4 *)(puVar2[2] + 8));
          FUN_020282f4(*(undefined4 *)(iVar3 + 4));
          FUN_020282f4(*(undefined4 *)(*(int *)(*(int *)(puVar2[2] + 0x18) + 0x8c) + 4));
          FUN_0207ce7c(*(undefined4 *)(puVar2[2] + 0x10),0x10000000);
          iVar3 = *(int *)(*(int *)(puVar2[2] + 0x10) + 0x5c);
          *(uint *)(iVar3 + 0x34) = *(uint *)(iVar3 + 0x34) | 0x400;
        }
      }
      else {
        (**(code **)(&DAT_021726e8 + (uint)*(byte *)(puVar2 + 0xe) * 4))(puVar2);
      }
    }
    else {
      FUN_02169630(puVar2);
    }
    puVar2 = puVar4;
  }
  return;
}

