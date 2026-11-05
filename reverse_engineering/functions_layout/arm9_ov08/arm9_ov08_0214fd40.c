
int FUN_0214fd40(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  
  func_0x021998ac(1);
  iVar1 = func_0x02199914();
  if ((0 < iVar1) && (uVar3 = 0, 0 < iVar1)) {
    do {
      if (param_2 <= (int)uVar3) break;
      uVar2 = func_0x02199858(uVar3 & 0xffff);
      MIi_CpuCopy32(uVar2,param_1,0xc0);
      uVar3 = uVar3 + 1;
      param_1 = param_1 + 0xc0;
    } while ((int)uVar3 < iVar1);
  }
  func_0x021998ac(0);
  return iVar1;
}

