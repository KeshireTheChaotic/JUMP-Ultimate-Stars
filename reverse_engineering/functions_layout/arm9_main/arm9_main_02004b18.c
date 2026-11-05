
void FUN_02004b18(uint *param_1,uint *param_2)

{
  char cVar1;
  uint uVar2;
  uint *puVar3;
  int iVar4;
  uint uVar5;
  
  uVar5 = (uint)param_2 & 3;
  if (((uint)param_1 & 3) == uVar5) {
    if (uVar5 != 0) {
      uVar2 = *param_2;
      *(char *)param_1 = (char)uVar2;
      if ((char)uVar2 == '\0') {
        return;
      }
      for (iVar4 = 3 - uVar5; iVar4 != 0; iVar4 = iVar4 + -1) {
        param_2 = (uint *)((int)param_2 + 1);
        cVar1 = *(char *)param_2;
        param_1 = (uint *)((int)param_1 + 1);
        *(char *)param_1 = cVar1;
        if (cVar1 == '\0') {
          return;
        }
      }
      param_1 = (uint *)((int)param_1 + 1);
      param_2 = (uint *)((int)param_2 + 1);
    }
    uVar5 = *param_2;
    if ((~uVar5 & uVar5 + 0xfefefeff & 0x80808080) == 0) {
      puVar3 = param_1 + -1;
      do {
        param_1 = puVar3;
        puVar3 = param_1 + 1;
        param_2 = param_2 + 1;
        *puVar3 = uVar5;
        uVar5 = *param_2;
      } while ((~uVar5 & uVar5 + 0xfefefeff & 0x80808080) == 0);
      param_1 = param_1 + 2;
    }
  }
  cVar1 = (char)*param_2;
  *(char *)param_1 = cVar1;
  while (cVar1 != '\0') {
    param_2 = (uint *)((int)param_2 + 1);
    cVar1 = *(char *)param_2;
    param_1 = (uint *)((int)param_1 + 1);
    *(char *)param_1 = cVar1;
  }
  return;
}

