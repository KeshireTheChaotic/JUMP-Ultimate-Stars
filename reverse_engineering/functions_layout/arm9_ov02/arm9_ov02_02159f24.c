
void FUN_02159f24(int param_1)

{
  undefined1 *puVar1;
  int *piVar2;
  undefined1 *puVar3;
  char cVar4;
  undefined1 auStack_110 [5];
  undefined1 auStack_10b [251];
  
  FUN_020517fc(auStack_110,0,0x100);
  cVar4 = **(char **)(param_1 + 4);
  *(char **)(param_1 + 4) = *(char **)(param_1 + 4) + 1;
  thunk_FUN_0207400c(auStack_110,s_demo__0215cab0);
  puVar3 = auStack_10b;
  for (; cVar4 != '\0'; cVar4 = cVar4 + -1) {
    puVar1 = *(undefined1 **)(param_1 + 4);
    *(undefined1 **)(param_1 + 4) = puVar1 + 1;
    *puVar3 = *puVar1;
    puVar3 = puVar3 + 1;
  }
  piVar2 = (int *)FUN_02035c90(auStack_110);
  if (piVar2[0xe] == 0) {
    (**(code **)(*piVar2 + 0x14))();
  }
  *(int *)(*(int *)(param_1 + 0x10) + (uint)*(byte *)(param_1 + 9) * 4) = piVar2[0xe];
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(char *)(param_1 + 9) = *(char *)(param_1 + 9) + '\x01';
  return;
}

