/*
------------------------------------------------------------------------------ 
This code was generated by Amplication. 
 
Changes to this file will be lost if the code is regenerated. 

There are other ways to to customize your code, see this doc to learn more
https://docs.amplication.com/how-to/custom-code

------------------------------------------------------------------------------
  */
import { ArgsType, Field } from "@nestjs/graphql";
import { ApiProperty } from "@nestjs/swagger";
import { PokemonCreateInput } from "./PokemonCreateInput";
import { ValidateNested } from "class-validator";
import { Type } from "class-transformer";

@ArgsType()
class CreatePokemonArgs {
  @ApiProperty({
    required: true,
    type: () => PokemonCreateInput,
  })
  @ValidateNested()
  @Type(() => PokemonCreateInput)
  @Field(() => PokemonCreateInput, { nullable: false })
  data!: PokemonCreateInput;
}

export { CreatePokemonArgs as CreatePokemonArgs };