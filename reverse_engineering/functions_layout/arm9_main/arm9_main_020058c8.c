
undefined8 FUN_020058c8(int param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int local_24 [3];
  int local_18;
  
  local_24[1] = 0;
  local_24[0] = param_1;
  uVar6 = FUN_02004d84(0x7fffffff,0x20049b9,local_24,&local_18,local_24 + 2);
  iVar1 = (int)((ulonglong)uVar6 >> 0x20);
  if (param_2 != (int *)0x0) {
    *param_2 = param_1 + local_18;
  }
  uVar7 = FUN_02009910((int)uVar6,iVar1);
  uVar2 = (undefined4)((ulonglong)uVar7 >> 0x20);
  if (local_24[2] == 0) {
    cVar5 = iVar1 == 0;
    FUN_0200c3f0(0,0,(int)uVar6);
    if (cVar5 != '\0') {
      return uVar6;
    }
    cVar5 = '\0';
    FUN_0200c330((int)uVar7,uVar2,0,0x100000);
    if (cVar5 != '\0') {
      bVar4 = false;
      bVar3 = false;
      FUN_0200c26c((int)uVar7,uVar2,0xffffffff,0x7fefffff);
      if (!bVar4 || bVar3) {
        return uVar6;
      }
    }
  }
  DAT_020a0c10 = 0x22;
  return uVar6;
}

