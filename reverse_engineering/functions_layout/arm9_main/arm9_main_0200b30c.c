
void FUN_0200b30c(void)

{
  int iVar1;
  undefined4 uVar2;
  uint local_24;
  undefined **local_1c;
  undefined4 local_18 [2];
  
                    /* JUS-TAG
                       strings=["!std::exception!!std::logic_error!!std::length_error!!","vector
                       length error"] */
  local_1c = &PTR_FUN_0200b1b4_1_02093758;
  iVar1 = FUN_02004b04(s_vector_length_error_02093898);
  uVar2 = thunk_FUN_0201a228(iVar1 + 1);
  local_24 = local_24 & 0xffffff00;
  FUN_0200ab5c(local_18,uVar2,local_24);
  FUN_02004b18(local_18[0],s_vector_length_error_02093898);
  local_1c = &PTR_FUN_0200b1d8_1_02093744;
  FUN_0200f5fc(s__std__exception__std__logic_erro_020938ac,&local_1c,0x200b1d9);
  return;
}

