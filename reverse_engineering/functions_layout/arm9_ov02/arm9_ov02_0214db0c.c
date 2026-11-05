
void FUN_0214db0c(int param_1,int param_2,char *param_3,byte *param_4)

{
  bool bVar1;
  bool bVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  bVar2 = false;
  *param_3 = '\0';
  *param_4 = 0;
  iVar7 = 0;
  do {
    bVar3 = *(byte *)(param_2 + 0x30);
    if ((int)(uint)bVar3 <= iVar7) {
      if (bVar2) {
        bVar3 = 0xff;
      }
      *param_4 = bVar3;
      return;
    }
    iVar4 = (uint)*(byte *)(param_2 + iVar7 + 0x31) * 0x88 + *(int *)(param_1 + 0x3c);
    iVar6 = (int)*(char *)(iVar4 + 4);
    bVar1 = true;
    if ((iVar6 != -1) && (((&DAT_020b4084)[*(byte *)(param_2 + iVar6 + 0x31)] & 1) == 0)) {
      bVar2 = true;
    }
    for (iVar6 = 0; iVar6 < 5; iVar6 = iVar6 + 1) {
      if ((*(short *)(iVar6 * 0x14 + iVar4 + 0x10) != -1) &&
         (iVar5 = FUN_0214dc1c(*(undefined1 *)(param_2 + iVar7 + 0x31),iVar6), iVar5 == 0)) {
        bVar1 = false;
        break;
      }
    }
    iVar4 = iVar7 + 1;
    iVar7 = iVar7 + 1;
    if (bVar1) {
      *param_3 = *param_3 + '\x01';
      iVar7 = iVar4;
    }
  } while( true );
}

