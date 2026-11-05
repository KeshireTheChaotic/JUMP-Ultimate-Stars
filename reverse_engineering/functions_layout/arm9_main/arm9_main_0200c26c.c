
uint FUN_0200c26c(uint param_1,uint param_2,uint param_3,uint param_4)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  
  if (param_2 * 2 < 0x200001 && param_2 * -2 != -0x200000) {
    param_2 = 0;
    param_1 = 0;
  }
  if (param_4 * 2 < 0x200001 && param_4 * -2 != -0x200000) {
    param_4 = 0;
    param_3 = 0;
  }
  if (-1 < (int)(param_4 | param_2)) {
    bVar3 = param_4 <= param_2;
    bVar1 = param_2 != param_4;
    if (!bVar1) {
      bVar3 = param_3 <= param_1;
    }
    bVar2 = param_1 != param_3;
    if (bVar3 && (bVar1 || bVar2)) {
      param_1 = 1;
    }
    if (!bVar3 || !bVar1 && !bVar2) {
      param_1 = 0;
    }
    return param_1;
  }
  bVar3 = param_2 <= param_4;
  bVar1 = param_4 != param_2;
  if (!bVar1) {
    bVar3 = param_1 <= param_3;
  }
  bVar2 = param_3 != param_1;
  if (bVar3 && (bVar1 || bVar2)) {
    param_1 = 1;
  }
  if (!bVar3 || !bVar1 && !bVar2) {
    param_1 = 0;
  }
  return param_1;
}

