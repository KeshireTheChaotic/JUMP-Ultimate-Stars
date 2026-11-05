
undefined4 FUN_037ff94c(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = (int)((*(ushort *)(param_1 + 0x24) & 0xff) << 4) >>
          (&DAT_03807dd4)[(int)(uint)*(ushort *)(param_1 + 0x24) >> 8];
  iVar2 = (int)((*(ushort *)(param_2 + 0x24) & 0xff) << 4) >>
          (&DAT_03807dd4)[(int)(uint)*(ushort *)(param_2 + 0x24) >> 8];
  if (iVar1 == iVar2) {
    uVar3 = 0;
  }
  else if (iVar1 < iVar2) {
    uVar3 = 1;
  }
  else {
    uVar3 = 0xffffffff;
  }
  return uVar3;
}

