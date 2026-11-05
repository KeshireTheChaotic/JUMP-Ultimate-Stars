
bool FUN_021a0664(char *param_1)

{
  char cVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  
  iVar2 = FUN_0219a93c();
  if (iVar2 != 0) {
    return false;
  }
  cVar1 = *param_1;
  bVar3 = cVar1 == '\0';
  if (bVar3) {
    cVar1 = param_1[1];
  }
  bVar4 = bVar3 && cVar1 == '\0';
  if (bVar3 && cVar1 == '\0') {
    bVar4 = param_1[2] == '\0';
  }
  return !bVar4;
}

