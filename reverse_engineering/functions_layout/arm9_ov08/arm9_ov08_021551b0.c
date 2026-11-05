
void FUN_021551b0(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 local_20;
  undefined4 local_1c;
  
  local_20 = 0;
  local_1c = 0;
  *(char *)(DAT_0216e6dc + 0x11d) = (char)param_1;
  iVar1 = 0;
  iVar2 = iVar1;
  do {
    FUN_02155214(param_1,iVar2,(&DAT_0216a51e)[iVar1 * 2]);
    iVar1 = iVar1 + 0xc;
    iVar2 = iVar2 + 1;
  } while (iVar2 < 4);
  if (param_1 == 2) {
    local_20 = 1;
  }
  else if (param_1 == 1) {
    local_1c = 1;
  }
  FUN_02155120(0x2f,local_20);
  FUN_02155120(0x30,local_1c);
  return;
}

