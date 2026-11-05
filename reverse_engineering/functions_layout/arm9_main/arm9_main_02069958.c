
void FUN_02069958(undefined4 param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  int local_38;
  uint local_34 [7];
  undefined4 local_18;
  
  FUN_02055588(local_34);
  uVar2 = 1;
  puVar1 = local_34;
  do {
    puVar1 = puVar1 + 1;
    *puVar1 = *puVar1 ^ puVar1[-1];
    uVar2 = uVar2 + 1;
  } while (uVar2 < 8);
  FUN_0206a968(&local_48);
  if (local_38 == 0) {
    FUN_02069c74(param_1,local_40,local_3c);
  }
  else {
    FUN_02069c74(param_1,local_48,local_44);
  }
  lVar3 = FUN_0200d10c(local_18,0,0x6c078965,0x5d588b65);
  FUN_02069c70(param_1,(int)((ulonglong)(lVar3 + 0x269ec3) >> 0x20),(int)(lVar3 + 0x269ec3));
  FUN_02069be0(param_1,1);
  return;
}

