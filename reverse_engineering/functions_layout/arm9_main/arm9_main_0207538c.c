
void FUN_0207538c(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  undefined2 *puVar6;
  bool bVar7;
  undefined8 uVar8;
  
  iVar4 = param_2 * 0xa4 + *(int *)(param_1 + 4);
  uVar1 = func_0x021643a4();
  if (*(char *)(param_1 + 0xc) == '\0') {
    DAT_020afedc = (undefined1)param_2;
  }
  else {
    DAT_020afedc = 0xff;
  }
  DAT_020afe9c = (uint)*(byte *)(iVar4 + 0x75);
  DAT_020afea0 = (uint)*(byte *)(iVar4 + 0x76);
  DAT_020afea8 = *(undefined4 *)(iVar4 + 0x70);
  DAT_020afea4 = (int)*(char *)(iVar4 + 0x78);
  uVar8 = func_0x0216446c(uVar1,*(undefined1 *)(iVar4 + 0x76));
  puVar3 = (undefined4 *)((ulonglong)uVar8 >> 0x20);
  bVar7 = (int)uVar8 == 1;
  if (bVar7) {
    puVar3 = &DAT_020afe90;
  }
  if (bVar7) {
    iVar2 = (uint)*(ushort *)(iVar4 + 0x7a) * 0x3c;
  }
  else {
    puVar3 = &DAT_020afe90;
    iVar2 = (*(ushort *)(iVar4 + 0x7a) + 1) * 0x90 + -1;
  }
  puVar3[7] = iVar2;
  DAT_020afebb = (*(byte *)(iVar4 + 0x7c) & 1) != 0;
  DAT_020afebc = (*(byte *)(iVar4 + 0x7c) & 2) != 0;
  DAT_020afebd = (*(byte *)(iVar4 + 0x7c) & 4) != 0;
  DAT_020afebe = 0;
  DAT_020afe90 = *(byte *)(iVar4 + 0x79) + 1;
  DAT_020afe98 = 0;
  DAT_020afede = *(char *)(iVar4 + 0x77);
  if (DAT_020afede == -1) {
    DAT_020afeb0 = 0;
    DAT_020afede = -1;
    DAT_020afeb4 = 0;
  }
  else {
    DAT_020afeb0 = 3;
    DAT_020afeb4 = *(undefined1 *)(iVar4 + 0x77);
    FUN_020708e4(0,3,(int)*(char *)(iVar4 + 0x77),&DAT_020afe90,param_4);
  }
  DAT_020afec3 = *(undefined1 *)(iVar4 + 0x79);
  for (uVar5 = 1; (int)uVar5 < (int)(*(byte *)(iVar4 + 0x79) + 1); uVar5 = uVar5 + 1) {
    puVar6 = (undefined2 *)((uVar5 - 1) * 0xc + iVar4 + 0x80);
    if (*(char *)(puVar6 + 4) != -1) {
      (&DAT_020afec4)[uVar5] = 3;
      DAT_020afec2 = DAT_020afec2 | (byte)(1 << (uVar5 & 0xff));
      (&DAT_020afeb0)[uVar5] = 4;
      (&DAT_020afeb4)[uVar5] = (char)*puVar6;
      *(undefined4 *)(uVar5 * 4 + 0x20afecc) = *(undefined4 *)(puVar6 + 2);
      (&DAT_020afebe)[uVar5] = *(undefined1 *)((int)puVar6 + 9);
      iVar2 = FUN_02070cdc(uVar5);
      *(char *)(iVar2 + 0x34) = (char)puVar6[1];
    }
  }
  func_0x0216442c(uVar1);
  return;
}

