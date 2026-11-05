
undefined4 FUN_0200e96c(undefined4 param_1,uint *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined1 auStack_20 [4];
  undefined4 local_1c;
  
  puVar2 = (undefined4 *)param_2[3];
  uVar3 = 0;
  if (*param_2 != 0) {
    do {
      local_1c = *puVar2;
      iVar1 = FUN_0200f2d0(param_1,local_1c,auStack_20);
      if (iVar1 != 0) {
        return 1;
      }
      uVar3 = uVar3 + 1;
      puVar2 = puVar2 + 1;
    } while (uVar3 < *param_2);
  }
  return 0;
}

