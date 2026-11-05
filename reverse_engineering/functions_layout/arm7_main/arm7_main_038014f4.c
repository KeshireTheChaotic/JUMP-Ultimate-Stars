
void FUN_038014f4(int param_1,int param_2,int param_3)

{
  byte bVar1;
  char cVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar6 = (int)*(short *)(&DAT_03807cd4 + (uint)*(byte *)(param_2 + 5) * 2) +
          (int)*(short *)(&DAT_03807cd4 + (uint)*(byte *)(param_1 + 4) * 2) +
          (int)*(short *)(&DAT_03807cd4 + (uint)*(byte *)(param_1 + 5) * 2);
  iVar5 = (int)*(short *)(param_1 + 10) + (int)*(short *)(param_2 + 6);
  cVar2 = *(char *)(param_1 + 6);
  bVar1 = *(byte *)(param_1 + 7);
  sVar3 = *(short *)(param_1 + 0xc);
  iVar4 = (int)*(char *)(param_1 + 8);
  if (*(byte *)(param_1 + 1) != 0x7f) {
    iVar4 = (int)(iVar4 * (uint)*(byte *)(param_1 + 1) + 0x40) >> 7;
  }
  iVar4 = iVar4 + *(char *)(param_1 + 9);
  if (iVar6 < -0x8000) {
    iVar6 = -0x8000;
  }
  if (iVar5 < -0x8000) {
    iVar5 = -0x8000;
  }
  if (iVar4 < -0x80) {
    iVar4 = -0x80;
  }
  else if (0x7f < iVar4) {
    iVar4 = 0x7f;
  }
  for (iVar7 = *(int *)(param_1 + 0x3c); iVar7 != 0; iVar7 = *(int *)(iVar7 + 0x50)) {
    *(short *)(iVar7 + 6) = (short)iVar5;
    if (*(char *)(iVar7 + 2) != '\x03') {
      *(short *)(iVar7 + 0xc) = (short)iVar6;
      *(short *)(iVar7 + 0xe) =
           (short)((uint)(((int)sVar3 + ((int)((int)cVar2 * (uint)bVar1 * 0x40) >> 7)) * 0x10000) >>
                  0x10);
      *(char *)(iVar7 + 0xb) = (char)iVar4;
      *(undefined1 *)(iVar7 + 4) = *(undefined1 *)(param_1 + 1);
      *(undefined2 *)(iVar7 + 0x28) = *(undefined2 *)(param_1 + 0x18);
      *(undefined2 *)(iVar7 + 0x2a) = *(undefined2 *)(param_1 + 0x1a);
      *(undefined2 *)(iVar7 + 0x2c) = *(undefined2 *)(param_1 + 0x1c);
      if ((*(int *)(iVar7 + 0x34) == 0) && (param_3 != 0)) {
        *(undefined1 *)(iVar7 + 0x22) = 1;
        FUN_037fffec(iVar7);
      }
    }
  }
  return;
}

