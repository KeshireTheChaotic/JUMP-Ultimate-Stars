
uint FUN_020679d8(int param_1,int param_2)

{
  byte bVar1;
  short sVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  if ((*(short *)(param_1 + 10) != 0x20) || (uVar3 = FUN_02067aa8(), (int)uVar3 < 1)) {
    iVar7 = 0;
    bVar1 = *(byte *)(param_2 + 0xd12);
    if (bVar1 != 0) {
      iVar5 = param_2 + 0x47c;
      sVar2 = *(short *)(param_1 + 10);
      iVar6 = param_2;
      do {
        if ((sVar2 == *(short *)(iVar6 + 0x47a)) &&
           (iVar4 = FUN_02004cec(param_1 + 0xc,iVar5,sVar2), iVar4 == 0)) {
          return (uint)*(byte *)(param_2 + iVar7 * 4 + 0x445);
        }
        iVar6 = iVar6 + 0xc0;
        iVar5 = iVar5 + 0xc0;
        iVar7 = iVar7 + 1;
      } while (iVar7 < (int)(uint)bVar1);
    }
    uVar3 = 0xffffffff;
  }
  return uVar3;
}

